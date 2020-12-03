#include "splitter.hpp"
#include "powInt.hpp"

int splitter(int toSplit, int index) {
    return (toSplit / powInt(10, index) % 10);
}
