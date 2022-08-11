#include <pybind11/pybind11.h>
namespace bluetooth {
namespace hci {
namespace py = pybind11;

void define_hci_packets_submodule_shard_0(py::module& m);
void define_hci_packets_submodule(py::module& m) {

define_hci_packets_submodule_shard_0(m);
}

}  //namespace hci
}  //namespace bluetooth
