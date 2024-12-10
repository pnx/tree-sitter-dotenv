import XCTest
import SwiftTreeSitter
import TreeSitterDotenv

final class TreeSitterDotenvTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_dotenv())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Dotenv grammar")
    }
}
