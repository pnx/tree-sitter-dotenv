// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterDotenv",
    products: [
        .library(name: "TreeSitterDotenv", targets: ["TreeSitterDotenv"]),
    ],
    dependencies: [
        .package(name: "SwiftTreeSitter", url: "https://github.com/tree-sitter/swift-tree-sitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterDotenv",
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
            name: "TreeSitterDotenvTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterDotenv",
            ],
            path: "bindings/swift/TreeSitterDotenvTests"
        )
    ],
    cLanguageStandard: .c11
)
