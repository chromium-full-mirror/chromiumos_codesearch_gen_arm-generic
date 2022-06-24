#include <pybind11/pybind11.h>
namespace bluetooth {
namespace security {
namespace py = pybind11;

void define_smp_packets_submodule_shard_0(py::module& m);
void define_smp_packets_submodule(py::module& m) {

define_smp_packets_submodule_shard_0(m);
}

}  //namespace security
}  //namespace bluetooth
