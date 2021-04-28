#pragma one

class engine
{
private:
    int ena;
    int in1; int in2; int in3; int in4; int enb;        
    void ml(bool dir);
    void mr(bool dir);
    

public:
    int speed;
    engine(int pena,int pin1, int pin2, int pin3, int pin4, int penb);
    ~engine();
    void stop();
    void forward(); 
    void back();
    void left();
    void right();
    // analogWrite()
};
