//
// Created by Shou C on 3/16/20.
//
#include "point.h"

vector operator+(vector v1, vector v2){
    return vector(v1.get_x() + v2.get_x(), v1.get_y() + v2.get_y());
}

vector operator-(vector v1){
    return vector(-v1.get_x(), -v1.get_y());
}

vector operator-(vector v1, vector v2){
    return vector(v1.get_x() - v2.get_x(), v1.get_y() - v2.get_y());
}

vector operator*(double l, vector v2){
    return vector(l * v2.get_x(), l * v2.get_y());
}

point operator+ (point p1, vector p2){
    return point(p1.get_x() + p2.get_x(), p1.get_y() + p2.get_y());
}

vector operator- (point p1, point p2){
    return vector(p1.get_x() - p2.get_x(), p1.get_y() - p2.get_y());
}

bool operator!(vector v1){
    return v1.get_x() == 0.0 && v1.get_y() == 0.0;
}

int main() {
    point p1(2,3), p2(4,7), p3, p4;
    std::cout<<p1<<std::endl; // (2,3)
    vector v1(2,3), v2(5,4);
    std::cout<<v1<<std::endl; // 2i + 3j

/***************************************************************************************************/
/* Following code segment performs some linear operations over vector. Note that, the sum of two vectors can be obtained just by adding their corresponding components.
For example, (3i+2j) + (5i+4j) = 8i+6j
If you multiply a vector with a scalar, (for this problem, a scalar will mean a double value) each of its components will get multiplied by that scalar to generate the resultant vector. Negation of a vector simply means negating each of its components. Your implementation of point and vector should support the following segment of code as well as ensure that the value of v3 is updated accordingly.   */

/***************************************************************************************************/
    vector v3 = -v1 + 1.2*v2;
    std::cout<<v3<<std::endl; // 4i + 1.8j
/***************************************************************************************************/
/* A vector can be added to a point to get another point. The resulting point is the displacement of the original point in direction and magnitude of the vector added to it.
For example, if the vector (2i+3j) is added to the point (7,8), the resulting point will be (9,11). Similarly, the difference of two points will create a vector whose components will be equal to the difference of corresponding co-ordinate values of the points. In this part, you are required to write code so that the following statements compile and behave as described.  */
/***************************************************************************************************/

    p3 = p2 + v3;
    std::cout<<p3<<std::endl; // (8, 8.8)
    vector v4 = p3 - p2;
    std::cout<<v4<<std::endl; // 4i + 1.8j

/**************************************************************************************************/
/* For any vector object v, the expression !v returns true if and only if v is a Null vector. Add necessary codes to make the following statements compile    */
/************************************************************************/
    if(!(v3 - v4))
        std::cout<<"They are equal!"<< std::endl; // They are equal!
    return 0;

} // end of main function
