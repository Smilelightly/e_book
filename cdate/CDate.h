//
// Created by ABC on 2022/4/12.
//
#include <iostream>

#ifndef E_BOOK_CDATE_H
#define E_BOOK_CDATE_H


class CDate {     //创建时间类
private:   //定义时间类私有属性
    int date_year;  //年
    int date_month;  //月
    int date_day;  //日
    int date_hour;  //小时
    int date_minute;  //分钟
    int date_second;  //秒

public:
    CDate() {
        date_year=0;
        date_month=0;
        date_day=0;
        date_hour=0;
        date_minute=0;
        date_second=0;
    };
    CDate(int dy,int dm,int dd,int dh,int dm,int ds){
        date_year=dy;
        date_month=dmo;
        date_day=dd;
        date_hour=dh;
        date_minute=dmi;
        date_second=ds;
    }
    int getYear(){
        return date_year;
    };
    int getMonth(){
        return date_month;
    };
    int getDay(){
        return date_day;
    };
    int getHour(){
        return date_hour;
    };
    int getMinute(){
        return date_minute;
    };
    int getSecond(){
        return date_second;
    };

    void setYear(int dy){
        year=dy;
    };
    void setMonth(int dmo){
        month=dmo;
    };
    void setDay(int dd){
        day=dd;
    };
    void setHour(int dh){
        hour=dh;
    };
    void setMinute(int dmi){
        minute=dmi;
    };
    void setSecond(int ds){
        second=ds;
    };
    void display(){};

};


#endif //E_BOOK_CDATE_H
