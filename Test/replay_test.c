#include "replay_test.h"

#include <stdint.h>
#include "arm_math.h"     
#include "event_detection.h" 

// #include "test_signal.h"

void Replay_Test_Run(){
    // Small_Signal_Test();
}


void SD_Card_Test(){
    
}

// void Small_Signal_Test(){
//     uint16_t idxFirst = 0;
//     float32_t nextBatch[BLOCK_SIZE];

//     init_Event_Detector(nextBatch);

//     while(idxFirst < 1024){
//         for(int i=0; i<32; i++){
//         nextBatch[i] = test_signal[idxFirst + i];
//         }
//         idxFirst += 32;
//         process_block();
//     }

//     while(1){

//     }
// }