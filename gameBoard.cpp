#include "gameBoard"




    //Constructeur vide

    GameBoard<T,J>::GameBoard(){ nCol(nColInit), nRow(nRowInit), b(new T[nColInit][nRowInit])}

   //Constructeur initialisant la taille du board explicitement
   GameBoard::GameBoard(int nCol, int nRow) : nCol(_nCol), nRow(_nRow),b(new T[_nCol][_nRow]){

        if((nCol<=0) || (nRow<=0)){

            nCol = nColInit;
            nRow = nRowinit;
            b=new T[nCol][nRow];

        }
    }


   //Destructeur
   GameBoard::~GameBoard()
   {
      delete [] b;
   }

   void add(const T& tile, int row, int col);

   const T& getTile(int row, int col) const;

   void getCoordinate(const T &tile, int *row, int *col) const;

   void setPlayer(J player);

   J getPlayer(const std::string& playerName);

   const T& getTile(const std::string& playerName) const;

   std::vector<J> getPlayers(const T& tile) const;

   const T& move(Enum Move move, const std::string& playerName );

};





