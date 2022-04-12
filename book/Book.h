//
// Created by ABC on 2022/4/12.
//

#ifndef E_BOOK_BOOK_H
#define E_BOOK_BOOK_H

#include <iostream>

class Book {  //定义 书 类

private:
    int book_id;  //书编号
    std::string book_name;  //书名
    std::string book_author;  //作者
    std::string book_label;  //标签
    std::string book_str;  //文件地址
    int book_num;  //下载次数

public:
    Book() {
        book_id = 0;
        book_name = "NULL";
        book_author="NUll";
        book_label="NULL";
        book_str="NULL";
        book_num=0;
    }
    Book(int b_id,std::string b_name,std::string b_author,std::string b_label,std::string b_str,int b_num){
        book_id=b_id;
        book_name=b_name;
        book_author=b_author;
        book_label=b_label;
        book_str=b_str;
        book_num=b_num;
    };
      //get
    int getId(){return book_id;};
    std::string getName(){return book_name;};
    std::string getAuthor(){return book_author;};
    std::string getLabel(){return book_label;};
    std::string getStr(){return book_str;};
    int getNum(){return book_num;};
      //set
    void setId(int b_id){book_id=b_id;};
    void setName(std::string b_name){book_name=b_name;};
    void setAuthor(std::string b_author){book_author=b_author;};
    void setLabel(std::string b_label){book_label=b_label;};
    void setStr(std::string b_str){book_str=b_str;};
    void setNum(int b_num){book_num=b_num;};

    //显示函数
    void dispbook(){};
    //添加函数
    void addbook(){};
    //删除函数
    void delbook(){};
    //下载函数
    void downloadbook(){};
    //查找函数
    void searchbook(){};
};


#endif //E_BOOK_BOOK_H
