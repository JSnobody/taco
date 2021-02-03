#include "taco/ir_tags.h"

namespace taco {
const char *ParallelUnit_NAMES[] = {"NotParallel", "DefaultUnit", "GPUBlock", "GPUWarp", "GPUThread", "CPUThread",
                                    "CPUVector", "CPUThreadGroupReduction", "GPUBlockReduction", "GPUWarpReduction", "Spatial"};
const char *OutputRaceStrategy_NAMES[] = {"IgnoreRaces", "NoRaces", "Atomics", "Temporary", "ParallelReduction",
                                          "SpatialReduction"};
const char *BoundType_NAMES[] = {"MinExact", "MinConstraint", "MaxExact", "MaxConstraint"};
const char *MemoryLocation_NAMES[] = {"Default", "GPUSharedMemory", "SpatialDRAM", "SpatialSRAM", "SpatialReg", "SpatialSparseSRAM", "SpatialFIFO"};
}
