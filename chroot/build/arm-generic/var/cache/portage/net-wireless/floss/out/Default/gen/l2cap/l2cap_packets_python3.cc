#include <pybind11/pybind11.h>
namespace bluetooth {
namespace l2cap {
namespace py = pybind11;

void define_l2cap_packets_submodule_shard_0(py::module& m);
void define_l2cap_packets_submodule(py::module& m) {

define_l2cap_packets_submodule_shard_0(m);
}

}  //namespace l2cap
}  //namespace bluetooth
