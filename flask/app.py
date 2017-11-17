# -*- coding: utf-8 -*-
# quiz/quiz.py

from flask import Flask
from flask import render_template
from flask import request, redirect, url_for, flash


app = Flask(__name__)

# konfiguracja aplikacji
app.config.update(dict(
    SECRET_KEY='bradzosekretnawartosc',
))

# lista pytań
DANE = [{
    'pytanie': 'Stolica Hiszpani, to:',  # pytanie
    'odpowiedzi': ['Madryt', 'Warszawa', 'Barcelona'],  # możliwe odpowiedzi
    'odpok': 'Madryt'},  # poprawna odpowiedź
    {
    'pytanie': 'Objętość sześcianu o boku 6 cm, wynosi:',
    'odpowiedzi': ['36', '216', '18'],
    'odpok': '216'},
    {
    'pytanie': 'Symbol pierwiastka Helu to :',
    'odpowiedzi': ['H', 'Fe', 'He'],
    'odpok': 'He'},
    {
    'pytanie': 'Najgorsza gra to:',
    'odpowiedzi': ['CS GO', 'LOL', 'TES V', 'Każda jest niezdatna'],
    'odpok': 'Każda jest niezdatna'},
    {
    'pytanie': 'Jak nazywał się mały dzieciak z W1:',
    'odpowiedzi': ['adas', '216', '18'],
    'odpok': '216'},

]
@app.route('/', methods=['GET', 'POST'])
def index():

    if request.method == 'POST':
        punkty = 0
        odpowiedzi = request.form

        for pnr, odp in odpowiedzi.items():
            if odp == DANE[int(pnr)]['odpok']:
                punkty += 1

        flash('Liczba poprawnych odpowiedzi, to: {0}'.format(punkty))
        return redirect(url_for('index'))

    # return 'Cześć, tu Python!'
    return render_template('index.html', pytania=DANE)

@app.route('/')
def inde():
    # return 'Cześć, tu Python!'
    return render_template('index.html', pytania=DANE)


@app.route('/kontakt')
def LALA():
    return 'Cześć, tu Python! Przed wyruszeniem w drogę należy zebrać drużynę!!!'


if __name__ == '__main__':
    app.run(debug=True)
