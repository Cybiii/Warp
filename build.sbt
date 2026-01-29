// Build configuration for Warp SIMT Vector Engine

name := "warp"

version := "1.0.0"

scalaVersion := "2.13.10"

libraryDependencies ++= Seq(
  "edu.berkeley.cs" %% "chisel3" % "3.6.0",
  "edu.berkeley.cs" %% "rocketchip" % "1.2.+"
)

resolvers ++= Seq(
  Resolver.sonatypeRepo("snapshots"),
  Resolver.sonatypeRepo("releases"),
  Resolver.mavenLocal
)

// Ensure SystemVerilog files are included as resources
Compile / unmanagedResourceDirectories += baseDirectory.value / "src" / "main" / "resources"
