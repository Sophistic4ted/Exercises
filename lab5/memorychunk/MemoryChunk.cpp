//
// Created by kwiakami on 28.03.17.
//

#include "MemoryChunk.h"

memorychunk::MemoryChunk::MemoryChunk(size_t sz) {
    int8_t* ptr = new int8_t[sz];
    size = sz;
}

int8_t *memorychunk::MemoryChunk::MemoryAt(size_t offset) const {
    return nullptr;
}

size_t memorychunk::MemoryChunk::ChunkSize() const {
    return 0;
}

memorychunk::MemoryChunk(MemoryChunk &&sz) : ptr(nullptr) , {
    std::swap(ptr,sz.ptr);
}

memorychunk::MemoryChunk::MemoryChunk(const size_t &sz) {

}

memorychunk::MemoryChunk &memorychunk::MemoryChunk::operator=(const size_t &sz) {
    return <#initializer#>;
}

memorychunk::MemoryChunk &memorychunk::MemoryChunk::operator=(size_t &&sz) {
    return <#initializer#>;
}

memorychunk::MemoryChunk::MemoryChunk() {

}

memorychunk::MemoryChunk::~MemoryChunk() {

}
