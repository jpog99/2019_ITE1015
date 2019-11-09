#pragma once
class Canvas {
    size_t _row,_col;
    char** _cvs;
    public:
    Canvas(size_t row, size_t col);
    ~Canvas();
    void Resize(size_t row, size_t col);
    bool DrawPixel(int x, int y, char brush);
    void Print();
    void Clear();
};
class Shape {
    public:
        Shape(int x,int y, char br) : x_pos(x), y_pos(y), _brush(br){}
        virtual ~Shape(){};
        virtual void Draw(Canvas* canvas){};
        virtual void printInfo(){};
    protected:
        int x_pos,y_pos;
        char _brush;
};

class Rectangle : public Shape {
    int _width,_height;
    public:
    Rectangle(int x,int y,int width, int height, char br) : Shape(x,y,br) ,_width(width) ,_height(height){}
    void Draw(Canvas* canvas);
    void printInfo();
};
class UpTriangle : public Shape {
    int _UTheight;
    public:
    UpTriangle(int x,int y,int height, char br) : Shape(x,y,br) ,_UTheight(height){}
    void Draw(Canvas* canvas);
    void printInfo();
};
class DownTriangle : public Shape {
    int _DTheight;
    public:
    DownTriangle(int x,int y,int height, char br) : Shape(x,y,br) ,_DTheight(height){}
    void Draw(Canvas* canvas);
    void printInfo();
};
class Diamond : public Shape {
    int _dist;
    public:
    Diamond(int x,int y,int distance, char br) : Shape(x,y,br) ,_dist(distance){}
    void Draw(Canvas* canvas);
    void printInfo();
};
