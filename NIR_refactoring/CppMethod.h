// ���� CppMethod.h - ���������� ������ CppMethod

#pragma once

#include <cstring>
#include <vector>
using namespace std;

#include "Structs2.h"

/// <summary>����� ������</summary>
class CppMethod {
private:
    vector<string> tokens;         // ������� ������

public:
    vector<Parameter> parameters,   // ��������� ������
        oldParameters;              // ������ ��������� ������

    vector<string> body;            // ������� ���� ������

    string type,                    // ��� ������������� ��������
        name;                       // �������� ������

    /// <summary>����������� ������� ������ CppMethod</summary>
    CppMethod();

    /// <summary>����������� ������� ������ CppMethod</summary>
    /// <param name="lexemes">- ������ ������</param>
    CppMethod(vector<string> tokens);

    /// <summary>��������� ������ ���������� ������</summary>
    /// <returns>������ ���������� ������</returns>
    vector<Parameter> GetMethodParameters();

    /// <summary>��������� ������ ���� ������</summary>
    /// <returns>������ ������ ���� ������</returns>
    vector<string> GetMethodBody();

    /// <summary>��������� ���� ������������� �������� ������</summary>
    /// <returns>��� ������������� ��������</returns>
    string GetMethodType();

    /// <summary>��������� �������� ������</summary>
    /// <returns>�������� ������</returns>
    string GetMethodName();

    vector<string> GetTokens();

    /// <summary>��������� ������� ������</summary>
    /// <returns>������ ������</returns>
    vector<string> ToTokens();
};
