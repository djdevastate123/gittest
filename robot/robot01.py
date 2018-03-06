#! /usr/bin/env python
# -*- coding: utf-8 -*-

import rg


class Robot:

    def act(self, game):
        # rodzaje pól: 'spawn', 'normal', 'obstacle', 'invalid'
        # rg.loc_types() - zwraca typ pola
        def czy_wejscie(poz):
            if 'spawn' in rg.loc_types(poz):
                return True
            return False

        # return ['guard']
        # return ['suicide']
        # return ['move', ()]
        # ilu_wrogow = 0

        print(game.robots)

        lista_wrogow_obok = []

        for poz, robot in game.robots.iteritems():
            if robot.player_id != self.player_id:  # rozpoznanie wroga
                if rg.dist(poz, self.location) <= 1:
                    lista_wrogow_obok.append(poz)
                    # ilu_wrogow +=1
                    # return ['attack', poz]

        print(lista_wrogow_obok)

        # rg.dist() - odległość między dwoma lokalizacjami
        # rg.toward() - najkrótsza droga między dwoma lokalizacjami

        if len(lista_wrogow_obok) > 2 and self.hp < 27 :
            return['suicide']
        elif len(lista_wrogow_obok):
            return['attack', lista_wrogow_obok[0]]

        if self.location == rg.CENTER_POINT:
            return ['suicide']

        # idź do środka planszy, ruch domyślny
        if czy_wejscie(self.poz):
            return ['move', rg.toward(self.location, rg.CENTER_POINT)]
