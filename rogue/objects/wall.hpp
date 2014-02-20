namespace rogue {
  class Wall: public Object {
  public: enum Direction  {Vertical, Horizontal};
  private:
    Direction dir;
  public:
    Wall (Map&, int, int, char);
    Symbol symbol();
    State state();
  	float weight();
  };
}
