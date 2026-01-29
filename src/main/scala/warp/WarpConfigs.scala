// Chipyard Configuration Files for Warp Accelerator
// Provides configuration mixins to add Warp to different cores

package warp

import chisel3._
import org.chipsalliance.cde.config.{Config, Field, Parameters}
import freechips.rocketchip.subsystem._
import freechips.rocketchip.tile._
import freechips.rocketchip.rocket._
import freechips.rocketchip.diplomacy.LazyModule

/**
 * Adds Warp accelerator to Rocket cores in the system
 * Usage: new Config(new WithWarpAccelerator ++ ...)
 */
class WithWarpAccelerator(
  numLanes: Int = 8,
  dataWidth: Int = 32,
  regFileSize: Int = 32,
  fifoDepth: Int = 16
) extends Config((site, here, up) => {
  case WarpKey => Some(WarpParams(
    numLanes = numLanes,
    dataWidth = dataWidth,
    regFileSize = regFileSize,
    fifoDepth = fifoDepth,
    addrWidth = 32
  ))
  case BuildRoCC => up(BuildRoCC) ++ Seq(
    (p: Parameters) => {
      val warp = LazyModule(new WarpAccelerator(
        OpcodeSet.custom0,
        p(WarpKey).get
      )(p))
      warp
    }
  )
})

/**
 * Adds Warp with 8 lanes (default configuration)
 */
class WithWarp8Lanes extends WithWarpAccelerator(numLanes = 8)

/**
 * Adds Warp with 16 lanes (maximum configuration)
 */
class WithWarp16Lanes extends WithWarpAccelerator(numLanes = 16)

/**
 * Adds Warp with 4 lanes (minimal configuration for testing)
 */
class WithWarp4Lanes extends WithWarpAccelerator(numLanes = 4)

/**
 * Complete RocketConfig with Warp 8-lane accelerator
 * Usage in Chipyard: make CONFIG=RocketWarp8Config
 */
class RocketWarp8Config extends Config(
  new WithWarp8Lanes ++
  new freechips.rocketchip.system.DefaultConfig
)

/**
 * Complete RocketConfig with Warp 16-lane accelerator
 * Usage in Chipyard: make CONFIG=RocketWarp16Config
 */
class RocketWarp16Config extends Config(
  new WithWarp16Lanes ++
  new freechips.rocketchip.system.DefaultConfig
)

/**
 * Minimal test configuration with Warp 4-lane accelerator
 * Usage in Chipyard: make CONFIG=RocketWarp4Config
 */
class RocketWarp4Config extends Config(
  new WithWarp4Lanes ++
  new freechips.rocketchip.system.DefaultConfig
)

/**
 * Warp with Rocket in a tiny configuration (for faster simulation)
 * Usage in Chipyard: make CONFIG=TinyRocketWarpConfig
 */
class TinyRocketWarpConfig extends Config(
  new WithWarp8Lanes ++
  new WithNSmallCores(1) ++
  new WithNBanks(1) ++
  new freechips.rocketchip.system.DefaultConfig
)

