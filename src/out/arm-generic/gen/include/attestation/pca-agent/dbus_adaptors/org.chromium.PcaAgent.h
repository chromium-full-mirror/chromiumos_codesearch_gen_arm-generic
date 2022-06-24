// Automatic generation of D-Bus interfaces:
//  - org.chromium.PcaAgent
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_ATTESTATION_OUT_DEFAULT_GEN_INCLUDE_ATTESTATION_PCA_AGENT_DBUS_ADAPTORS_ORG_CHROMIUM_PCAAGENT_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_ATTESTATION_OUT_DEFAULT_GEN_INCLUDE_ATTESTATION_PCA_AGENT_DBUS_ADAPTORS_ORG_CHROMIUM_PCAAGENT_H
#include <memory>
#include <string>
#include <tuple>
#include <vector>

#include <base/files/scoped_file.h>
#include <dbus/object_path.h>
#include <brillo/any.h>
#include <brillo/dbus/dbus_object.h>
#include <brillo/dbus/exported_object_manager.h>
#include <brillo/dbus/file_descriptor.h>
#include <brillo/variant_dictionary.h>

namespace org {
namespace chromium {

// Interface definition for org::chromium::PcaAgent.
class PcaAgentInterface {
 public:
  virtual ~PcaAgentInterface() = default;

  virtual void Enroll(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<attestation::pca_agent::EnrollReply>> response,
      const attestation::pca_agent::EnrollRequest& in_request) = 0;
  virtual void GetCertificate(
      std::unique_ptr<brillo::dbus_utils::DBusMethodResponse<attestation::pca_agent::GetCertificateReply>> response,
      const attestation::pca_agent::GetCertificateRequest& in_request) = 0;
};

// Interface adaptor for org::chromium::PcaAgent.
class PcaAgentAdaptor {
 public:
  PcaAgentAdaptor(PcaAgentInterface* interface) : interface_(interface) {}
  PcaAgentAdaptor(const PcaAgentAdaptor&) = delete;
  PcaAgentAdaptor& operator=(const PcaAgentAdaptor&) = delete;

  void RegisterWithDBusObject(brillo::dbus_utils::DBusObject* object) {
    brillo::dbus_utils::DBusInterface* itf =
        object->AddOrGetInterface("org.chromium.PcaAgent");

    itf->AddMethodHandler(
        "Enroll",
        base::Unretained(interface_),
        &PcaAgentInterface::Enroll);
    itf->AddMethodHandler(
        "GetCertificate",
        base::Unretained(interface_),
        &PcaAgentInterface::GetCertificate);
  }

  static dbus::ObjectPath GetObjectPath() {
    return dbus::ObjectPath{"/org/chromium/PcaAgent"};
  }

  static const char* GetIntrospectionXml() {
    return
        "  <interface name=\"org.chromium.PcaAgent\">\n"
        "    <method name=\"Enroll\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "    <method name=\"GetCertificate\">\n"
        "      <arg name=\"request\" type=\"ay\" direction=\"in\"/>\n"
        "      <arg name=\"reply\" type=\"ay\" direction=\"out\"/>\n"
        "    </method>\n"
        "  </interface>\n";
  }

 private:
  PcaAgentInterface* interface_;  // Owned by container of this adapter.
};

}  // namespace chromium
}  // namespace org
#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_ATTESTATION_OUT_DEFAULT_GEN_INCLUDE_ATTESTATION_PCA_AGENT_DBUS_ADAPTORS_ORG_CHROMIUM_PCAAGENT_H
