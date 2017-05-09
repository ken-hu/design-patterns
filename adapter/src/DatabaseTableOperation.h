/**
 * @file DatabaseTableOperation.h
 * Define the domain-specific interface that Client uses.
 * @author Ken Hu
 */

#pragma once

#include <string>

class DatabaseTableOperation
{
public:
    virtual void createTable(std::string tableName) = 0;
    virtual void dropTable(std::string tableName) = 0;
    virtual void showTable(std::string tableName) = 0;

    virtual ~DatabaseTableOperation() {}
};

