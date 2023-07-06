class city{ //Classe me arquivos separados.
    private:
    int ano, populacao;

    public:
   
    city (int a, int p); //Construtor.
    void setano (int a); //Set recebe um valor.
    int getano (); //Get retorna esse valor.

    void setpopulacao (int p); //void não retorna valor.
    int getpopulacao ();
    
    void acrescentapopulacao (int p); //Se a população atual da cidade for 1000 e o valor passado para acrescentapopulacao for 500, a população será atualizada para 1500 (1000 + 500).
};
