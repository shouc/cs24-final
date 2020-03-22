//
// Created by Shou C on 3/16/20.
//

#include <iostream>

#define abs(x) x < 0 ? -x : x

class vector {
    double x;
    double y;
public:
    vector(double x, double y){
        this->x = x;
        this->y = y;
    }

    /* A utility function to facilitate printing the point in xi + yj format  */
    /* where i and j are unit vectors along +X and +Y directions respectively.*/
    /* You should not modify this function.                                   */
    double get_x(){
        return x;
    }
    double get_y(){
        return y;
    }
    friend std::ostream& operator<<(std::ostream& os, const vector& v) {
        if (!(v.x || v.y)) return (os<<0);
        if(v.x) os<<v.x<<"i";
        if(v.x && v.y) os<<(v.y>0?" + ":" - ");
        if(v.y) os<<(v.x?abs(v.y):v.y)<<"j";
        return os;
    }
};


class point {
private:
    double x;
    double y;
public:
    point(double x=0, double y=0){
        this->x = x;
        this->y = y;
    };
/* A utility function to print the point in (x,y) format. You should not modify this function.*/
    friend std::ostream& operator<<(std::ostream& os, const point& p) {
        return (os<<"("<<p.x<<","<<p.y<<")");
    }
    double get_x(){
        return x;
    }
    double get_y(){
        return y;
    }
};