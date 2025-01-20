#pragma once

#include "header.hpp"

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

extern struct Token* TokenTable;
extern int pos;

namespace AST {
    //  program :: = "program <name>;", "start", { "variable", variable_declaration, ";" }, { statement, ";" }, "finish";
    struct astNode*  program();
    //  programBody ::= { statement };
    struct astNode*  programBody();
    //  variable_declaration ::= "int16_t", variable_list;
    struct astNode*  variableDeclaration();
    //  variable_list ::= identifier, {",", identifier};
    struct astNode*  variableList();
    //  statement ::= input_statement | output_statement | assign_statement | if_else_statement | goto_statement | label_point | for_statement | while_statement | repeat_until_statement | compound_statement;
    struct astNode*  statement();
    //  input_statement ::= "input", identifier;
    struct astNode*  inputStatement();
    //  output_statement ::= "output", arithmetic_expression;    
    struct astNode*  outputStatement();
    //  arithmetic_expression :: = low_priority_expression{ low_priority_operator, low_priority_expression };
    struct astNode*  arithmeticExpression();
    //  low_priority_expression :: = middle_priority_expression{ middle_priority_operator, middle_priority_expression };
    struct astNode*  lowPriorityExpression();
    //  low_priority_operator :: = "+" | "-";
    //void lowPriorityOperator();

    //  middle_priority_expression :: = identifier | number | "(", arithmetic_expression, ")";
    struct astNode*  middlePriorityExpression();
    //  middle_priority_operator :: = "*" | "/" | "%";
    //struct astNode*  middlePriorityOperator();

    //  assign_statement :: = arithmetic_expression, "==>", identifier;
    struct astNode*  assignStatement();
    //  if_else_statement :: = "if", "(", logical_expression, ")", statement, [";", "else", statement];
    struct astNode*  ifStatement();
    //  logical_expression :: = and_expression{ or_operator, and_expression };
    struct astNode*  logicalExpression();

    //  and_expression :: = comparison{ and_operator, and_expression };
    struct astNode*  andExpression();

    //  comparison :: = comparison_expression | [not_operator] "(", logical_expression, ")";
    struct astNode*  comparison();

    //  comparison_expression :: = arithmetic_expression comparison_operator arithmetic_expression;
    struct astNode*  comparisonExpression();
    //  comparison_operator :: = "eg" | "ne" | ">=" | "<=";
    //  struct astNode*  comparisonOperator();

    //  goto_statement :: = "goto", identifier;
    struct astNode*  gotoStatement();
    //  label_point :: = identifier, ":";
    struct astNode*  labelPoint();
    //  for_to_statement :: = "for", assign_statement, "to" | "downto", arithmetic_expression, "do", statement;
    struct astNode*  forStatement();
    //  while_statement :: = "while", logical_expression, { statement_in_while }, "end";
    struct astNode*  whileStatement();
    //  statement_in_while :: = statement | "CONTINUE WHILE" | "exit while";
    struct astNode*  statementInWhile();
    struct astNode*  whileBody();
    //  repeat_until_statement :: = "repeat", repeat_body, "until", "(", logical_expression, ")";
    struct astNode*  repeatStatement();
    //  repeat_body :: = { statement, ";" };
	struct astNode*  repeatBody();
    //  compoundStatement :: = "start", { statement }, "finish";
    struct astNode*  compoundStatement();

    void deleteNode(struct astNode* node);
    struct astNode* createNode(enum TypeOfNode type, const char* name, struct astNode* left, struct astNode* right);
    void printAST(struct astNode* node, int level);
    void fPrintAST(FILE* outFile, struct astNode* node, int level);
    void match(enum TypeOfToken expectedType);
    struct astNode* astParser();    
}
