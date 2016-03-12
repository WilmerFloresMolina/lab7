

#define RACIONAL_H


 class racional {
 	public:
		racional( int num , int den );
		void AsignaNumerador( int n );
		void AsignaDenominador( int d );
		racional ObtieneRacional();
		//void ImprimeRacional();
		const racional racional::SumaRacional( const racional& der ) ;
		const racional racional::RestaRacional( const racional& der ) ;
		const racional racional::MultiplicaRacional( const racional& der )  ;
		const racional racional::DivideRacional( const racional& der ) ;
	


		


	private:
		void ReduceRacional();
		int num;
		int den;
 };