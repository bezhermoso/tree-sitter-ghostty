// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterGhostty",
    products: [
        .library(name: "TreeSitterGhostty", targets: ["TreeSitterGhostty"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterGhostty",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterGhosttyTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterGhostty",
            ],
            path: "bindings/swift/TreeSitterGhosttyTests"
        )
    ],
    cLanguageStandard: .c11
)
