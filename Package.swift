// swift-tools-version: 5.6
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "Viziotix Scanview SDK",
    platforms: [
        .iOS(.v14)
    ],
    products: [
        .library(
            name: "ViziotixScanview",
            targets: ["ViziotixScanview"]),
        .library(
            name: "PhenixDecoder",
            targets: ["PhenixDecoder"]),
    ],
    targets: [
        .binaryTarget(
            name: "ViziotixScanview",
            path: "./Sources/Frameworks/ViziotixScanview.xcframework"),
        .binaryTarget(
            name: "PhenixDecoder",
            path: "./Sources/Frameworks/PhenixDecoder.xcframework"),
    ]
)
