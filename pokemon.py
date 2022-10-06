import requests
import inquirer


firstGen = requests.get('https://pokeapi.co/api/v2/pokemon?limit=151',
                        headers={"User-Agent": "Hello, again"})

firstGenData = firstGen.json()


def singlePkmnFunction():
    singlePkm = requests.get(f'https://pokeapi.co/api/v2/pokemon/{query}',
                             headers={"User-Agent": "Hello"})

    singlePkmData = singlePkm.json()
    print(f'You searched: {singlePkmData["name"]}')
    print(f'Its id is: {singlePkmData["id"]}')


# First Pkmn (151)
pkmns = []

for result in firstGenData['results']:
    pkmn = result['name']
    pkmns.append(pkmn)


# Domande
questions = [
    inquirer.List('response',
                  message="Hey, what do you wanna do?",
                  choices=['I want to look for a Pokémon',
                           'I want to see all the Pokémon of the first generation']),
]
answers = inquirer.prompt(questions)

i = 1
if (answers['response'] == 'I want to see all the Pokémon of the first generation'):
    print('Here are the Pokèmon of the first generation:')
    print("\n".join(pkmns))
else:
    print('Search')
    query = input()
    singlePkmnFunction()
