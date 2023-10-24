//
// Created by me on 2023/10/10.
//

#ifndef COMPILER_SYMBOL_H
#define COMPILER_SYMBOL_H
#define VARIABLE_TYPE 0 //普通变量
#define ARRAY_1_TYPE 1 //一维数组的意思
#define ARRAY_2_TYPE 2 //二维数组的意思
#define FUNC_TYPE 3 //函数
#define CONST_KIND 0
#define VAR_KIND 1
#include<string>
#include<vector>
class Symbol {
private:
    int id;
    int tableId;
    std::string tokenName;
    int type; //变量/一维数组/二维数组/函数
    int kind; //const或者var


    /*func的内容*/
    int returnType;
    int paramNum;
    std::vector<int> paraTypes;

public:
    Symbol()  = default;
    Symbol(int id,int tableId,std::string tokenValue,int type, int kind);
    Symbol(int id,int tableId,std::string tokenName,int type, int returnType,int paramNum,std::vector<int> paraTypes);
    std::string getTokenValue();
    int getKind();
    int getSymbolType();
    int getReturnType();
    int getParaNum();
    std::vector<int> getParaTypes();
};


#endif //COMPILER_SYMBOL_H
