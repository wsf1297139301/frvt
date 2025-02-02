#ifndef RECT_H_
#define RECT_H_

#include <stdexcept>

namespace FRVT_11 {
    struct Rect {
    Rect(int x1, int y1, int x2, int y2, float score): x1(x1), y1(y1), x2(x2), y2(y2), score(score) {}
    
    int Area()
    {
        return (x2 - x1 + 1) * (y2 - y1 + 1);
    }
    
    int x1, y1, x2, y2;
    float score;

    int& operator[] (const int index);
};
}

#endif /* RECT_H_ */
