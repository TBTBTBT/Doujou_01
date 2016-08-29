void BallSan::junbi(float x,float y){
    pos = ofVec2f(x,y);
    acc = ofVec2f(0,0);
    size = 50;
}
void BallSan::ugokasu(){
    pos+=acc;
}
void BallSan::juuryoku(float x,float y){
    float l = sqrt((x - pos.x) * (x - pos.x) + (y - pos.y) * (y - pos.y));
    acc.x += ((x - pos.x)/l)/6;
    acc.y += ((y - pos.y)/l)/6;
    acc *= 0.99;
}
void BallSan::ataru(float x,float y,float r){
    float l = sqrt((x - pos.x) * (x - pos.x) + (y - pos.y) * (y - pos.y));
    if(l <= size ){
        acc.x += -((x-pos.x)/l) * 2;
        acc.y += -((y-pos.y)/l) * 2;
    }
}
void BallSan::hyouji(){

}
