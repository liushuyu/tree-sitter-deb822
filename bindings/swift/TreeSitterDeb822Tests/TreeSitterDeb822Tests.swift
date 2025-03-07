import XCTest
import SwiftTreeSitter
import TreeSitterDeb822

final class TreeSitterDeb822Tests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_deb822())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Deb822 grammar")
    }
}
