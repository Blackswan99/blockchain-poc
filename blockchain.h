class Block {
   public:
      Block(unsigned int index, unsigned char[] previousHash, time_t timestamp, Data data, unsigned char[] hash);
 
   private:
      unsigned int index;
      unsigned char previousHash[32];
      time_t timestamp;
      Data data;
      unsigned char hash[32];
};
