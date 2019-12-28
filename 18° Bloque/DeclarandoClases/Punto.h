class Punto {
    //Atributos
    private:
        int x, y;

    //Metodos
    public:
        Punto(int x, int y);//Constructor

        Punto(); //Constructor sobrecargado

        //Setters
        void setX(int x);
        void setY(int y);

        //Getters
        int getX();
        int getY();
};