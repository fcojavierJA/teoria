/**
 * @brief  Definici�n de una clase. 
 *        Ejemplo T_2_4, de la Teor�a de Prog. Orientada a Objetos
 *        del curso 2015-2016.
 * @file GaticoDeFeisbus.h
 * @author Victor M. Rivas Santos <vrivas@ujaen.es>
 *
 * @date 19 de septiembre de 2015, 11:36
 */

#ifndef GATICODEFEISBUS_H
#define	GATICODEFEISBUS_H

/**
 * @brief Clase GaticoDeFeisbus. Ejemplo T_2_4 de Teor�a
 */

class GaticoDeFeisbus {

public:
    // M�todos NO inline
    GaticoDeFeisbus();
    GaticoDeFeisbus(const GaticoDeFeisbus& orig);
    ~GaticoDeFeisbus();
    int GetNumMeGusta() const;

    // M�todo inline
    void megusta() {
        ++this->numMeGusta;
    };
    
private:
    /// N�mero de "Me gusta" que ha recibido.
    int numMeGusta;
};

#endif	/* GATICODEFEISBUS_H */
