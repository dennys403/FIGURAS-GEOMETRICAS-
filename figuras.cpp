#include <iostream>

using namespace std;

class Figura {
 
public: 
    Figura (){}
    virtual ~ Figura (){}
    virtual float perimetro () = 0;
    virtual float area () = 0;
    virtual std::string Info() { return ""; }
  };
  
class Cuadrado : public Figura {
private:
    float lado;
      
public:
    Cuadrado(float lado) : Figura(){
        this->lado = lado;
    }
    
    ~Cuadrado(){}
      
    float perimetro () override;
    float area () override;
    float getLado () const;
    void setLado(float edge) ;
  
  };
  
    
int main (){
  
float lado = 8.5;
Cuadrado *cuadrado = new Cuadrado(lado);
       
    cout << "perimetro: " << cuadrado -> perimetro() << endl;
    cout << "area: " << cuadrado -> area () << endl; 
    delete cuadrado;
    return 0; 
  }


float Cuadrado:: perimetro(){
    return lado * 4;
}
  
float Cuadrado :: area (){
     return lado * lado;
}
    
float Cuadrado :: getLado() const{
     return lado;
}
    
void Cuadrado :: setLado (float lado){
        this -> lado = lado;
}