#include<stdio.h>
#include<stdlib.h>
#include "asncodec.h"

ASNEncoder* createEncoder() {
    ASNEncoder *instance = (ASNEncoder*)malloc(sizeof(ASNEncoder));
    instance->sequence = (SequenceEncoder*)malloc(sizeof(SequenceEncoder));
    return instance;
}

SequenceEncoder* encodeSequence(SequenceEncoder* encoder) {

}

int getSequenceSize(SequenceEncoder* encoder) {

}

void encodeInt32(SequenceEncoder* encoder, int value) {

}

void encodeInt64(SequenceEncoder* encoder, long value) {

}

void encodeReal32(SequenceEncoder* encoder, float value) {

}

void encodeReal64(SequenceEncoder* encoder, double value) {

}

void releaseEncoder(ASNEncoder* encoder) {

}

SequenceDecoder* createDecoder(void* buffer) {

}

SequenceDecoder* decodeSequence(SequenceDecoder* decoder) {

} 

int decodeInt32(SequenceDecoder* decoder) {

}

long decodeInt64(SequenceDecoder* decoder) {

}

float decodeReal32(SequenceDecoder* decoder) {

}

double decodeReal64(SequenceDecoder* decoder) {

}