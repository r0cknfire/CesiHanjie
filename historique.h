#ifndef HEADER_HISTORIQUE
#define HEADER_HISTORIQUE

/***
 *       ___         _                    _ _
 *      / __\___ ___(_) /\  /\__ _ _ __  (_(_) ___
 *     / /  / _ / __| |/ /_/ / _` | '_ \ | | |/ _ \
 *    / /__|  __\__ | / __  | (_| | | | || | |  __/
 *    \____/\___|___|_\/ /_/ \__,_|_| |__/ |_|\___|
 *                                     |__/
 * Projet codé Rockfire, MSRog et UF-Ryzen du centre Exia Arras
 */
#include "includes.h"

void AfficherHistorique();
int EditerHistorique(DonneesPartie*);
int HistoriqueVersTableau();

void HistoriqueCroissant();
void HistoriqueDecroissant();

#endif // HEADER_HISTORIQUE
