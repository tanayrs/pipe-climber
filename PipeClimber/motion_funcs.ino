void extend_top(){
        rack_top.setSpeed(128);
        delay(250);
        rack_top.setSpeed(0);
}

void retract_top(){
        rack_top.setSpeed(-128);
        delay(250);
        rack_top.setSpeed(0);
}

void move_top(){
        lead_screw.setSpeed(128);
        delay(9000);
        lead_screw.setSpeed(0);
}

void move_bottom(){
        lead_screw.setSpeed(-128);
        delay(9000);
        lead_screw.setSpeed(0);
}

void extend_bottom(){
        rack_bottom.setSpeed(128);
        delay(200);
        rack_bottom.setSpeed(0);
}

void retract_bottom(){
        rack_bottom.setSpeed(-128);
        delay(200);
        rack_bottom.setSpeed(0);
}