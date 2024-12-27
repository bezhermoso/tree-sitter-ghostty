import XCTest
import SwiftTreeSitter
import TreeSitterGhostty

final class TreeSitterGhosttyTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_ghostty())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Ghostty grammar")
    }
}
