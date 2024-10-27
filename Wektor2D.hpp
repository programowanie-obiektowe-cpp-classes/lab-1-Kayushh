class Wektor2D
{
    private:
    double x_cor;
    double y_cor;

    public:

    Wektor2D() : x_cor(0), y_cor(0) {} //Konstruktor domyslny
    Wektor2D(double x, double y) : x_cor(x), y_cor(y) {}
    double getX() const {return x_cor;}
    double getY() const {return y_cor;}
    void setX(double x) {x_cor = x;}
    void setY(double y) {y_cor=y;}
    Wektor2D operator+(const Wektor2D& W2) const //Operator dodawania wektorów
    {
        return Wektor2D(x_cor+W2.x_cor, y_cor+W2.y_cor);
    }
    double operator*(const Wektor2D& W2) const //iloczyn skalarny
    {
        return (x_cor * W2.x_cor) + (y_cor * W2.y_cor);
    }

};
