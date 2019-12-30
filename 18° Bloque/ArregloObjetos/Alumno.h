class Alumno {
    private:
        float calMat, calProg, promedio;

    public:
        Alumno();//Solo el constructor por defecto cuando se usan arreglos de objetos

        Alumno(float, float);

        void pedirDatos();
        void mostrarDatos();
};