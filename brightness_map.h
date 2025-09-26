#pragma once
#include "esphome.h"
#include <map>
#include <string>

// Structure de mapping Intensité + Vitesse
struct BrightnessInfo {
  const char* intensite;
  const char* vitesse;
};

// Table de correspondance
static const std::map<uint8_t, BrightnessInfo> BRIGHTNESS_MAP = {
  {0x03, {"Faible",  "Lente"}},
  {0x43, {"Faible",  "Normale"}},
  {0x83, {"Faible",  "Rapide"}},

  {0x13, {"Moyenne",  "Lente"}},
  {0x53, {"Moyenne",  "Normale"}},
  {0x93, {"Moyenne",  "Rapide"}},

  {0x23, {"Forte",    "Lente"}},
  {0x63, {"Forte",    "Normale"}},
  {0xA3, {"Forte",    "Rapide"}},

  {0x33, {"Maximale", "Lente"}},
  {0x73, {"Maximale", "Normale"}},
  {0xB3, {"Maximale", "Rapide"}}
};

// Fonction utilitaire
inline BrightnessInfo get_brightness_info(uint8_t val) {
  auto it = BRIGHTNESS_MAP.find(val);
  if (it != BRIGHTNESS_MAP.end()) {
    return it->second;
  }
  return {"Inconnue", "Inconnue"};
}
