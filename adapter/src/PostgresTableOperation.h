/**
 * @file PostgresTableOperation.h
 * Define an existing interface that needs adapting.
 * @author Ken Hu
 */

#pragma once

#include <iostream>
#include <string>

class PostgresTableOperation
{
public:
    // The syntax in Postgres to describe a table
    void backslashD(std::string tableName) {
        std::cout << "\\d " + tableName << std::endl;
    }
};

