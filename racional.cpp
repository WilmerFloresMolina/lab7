    #include "racional.h"
    #include <cstring>
    #include <string>
    #include <sstream>
    #include <iostream>



     racional::racional( int num =1, int den=2 ){
     	this->num = num;
        this->den = den;
     	ReduceRacional();
     }

      racional racional::ObtieneRacional(){
        racional r;
        r.num = num;
        r.den = den;
       return r;
     }

     void racional::ReduceRacional() {
     	int menor;
    	menor = num<  den ? num : den;
        while (  menor>  1 ){
        	if ( ( num % menor == 0  )&&( den % menor == 0 ) ){
         	num = num/menor;
         	den = den/menor;


        	}
        menor--;
       }
     }

    racional racional::SumaRacional( const racional& der ) const {
         racional r;

         r.den = den * der.den;
         r.num = ( ( ( r.den / den ) * num ) + ( ( r.den / der.den ) * der.num ) );
         r.ReduceRacional();
    return r;
    }

    racional racional::RestaRacional( const racional& der ) const{
            racional r;

            r.den = den * der.den;
            r.numerador = ( ( ( r.den / den ) * num ) - ( ( r.den / der.den ) * der.num ) );
            r.ReduceRacional();
       return r;
     }

    racional racional::MultiplicaRacional( const racional& der ) const {
        racional r;

        r.num = num * der.num;
        r.den = den * der.den;
        r.ReduceRacional();
       return r;
     }

     racional racional::DivideRacional( const racional& der ) const{
        racional r;
        r.num = num * der.den;
        r.denominador = den * der.num;
        r.ReduceRacional();
       return r;
    }



    void racional::ImprimeRacional(){
    	cout<<  num<<" / "<<  den<<  endl;

    }





