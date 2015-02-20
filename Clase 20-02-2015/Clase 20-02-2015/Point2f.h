#ifndef _Point2f_H
#define _Point2f_H

class Point2f
{
public:

	/*Constructor -> No es necessari contruir-los tampoc
	Point2f();
	*/
	void SetZero()
	{
		fx = fy = 0.0f; //una assignació. Lo de la dreta ho assigno a l'esquerra. Una assignació retorna el valor que ha agafat. Per això podem escriure aquesta línia.
	}                 // y pren el valor de 0 i per això el pot assugnar a x

	/*Destructor -> Not necessary to call it
	virtual ~Point2f()
	{

	}
	*/
	bool IsZero() const //no canvia l'estat de la classe. Ha de ser constant
	{
		return fx == 0.0f && fy == 0.0f; //avaluem si x es igual a 0 i y es igual a 0
	}

	void Negate()
	{
		fx = -fx;
		fy = -fy;
	}

	Point2f operator+ (const Point2f& a) const  //Point2f retorna un objecte. operator declara un operador, el + indica que és de suma. "const Point2f& a" declara
												// la intenció de no modificar la a
	{
		Point2f tmp; //variable nova tmp = temporal contindrà la suma de jo i el que m'ha passat (paraula de Ricard)
		tmp.fx = fx + a.fx;
		tmp.fy = fy + a.fy;

		return tmp; //tornem l'objecte perquè es pugui utilitzar
	}
	Point2f& operator+= (const Point2f& a)
	{
		fx += a.fx;
		fy += a.fy;

		return(*this) //this es un ounter a la classe. el mateix objecte que estás cridant ?
	}
	//afegir operadors +, +=, - , -=

public:
	float fx, fy;
};

#endif //_Point2f_H_

//exemples if(x = 0.f) {} interpreta x = 0.0f com 0 i es pot utilitzar alguna cosa així sense necessitat == 
//                        un if s'executa sempre que el valor no sigui 0 (en aquest cas ho seria)
// Punt de entrada -> main Podem utilitzar int main(int argc, char** argv) per comprovar si la classe compila