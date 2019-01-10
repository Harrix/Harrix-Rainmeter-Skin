function Initialize()
  dictionaryDate = {
    ru = {
      january = 'Января',
      february = 'Февраля'
      february = 'Февраля'
    }
  }

  translateToday = {
  english = 'Today is',
  german = 'Heute ist',
  french = 'Aujourd\'hui, c\'est',
  spanish = 'Hoy es',
  russian = 'Cегодня'
  }

  translateDays = {
  english = {'Sunday','Monday','Tuesday','Wednesday','Thursday','Friday','Saturday'},
  german = {'Sonntag','Montag','Dienstag','Mittwoch','Donnerstag','Freitag','Samstag'},
  french = {'dimanche','lundi','mardi','mercredi','jeudi','vendredi','samedi'},
  spanish = {'domingo','lunes','martes','mercredi','miércoles','viernes','sábado'},
  russian = {'воскресенье','понедельник','вторник','среда','четверг','пятница'}
  }
end

function TranslateDate(date, lang)
  local dic = dictionaryDate[lang]
  local translatedDate = date
  --for k, v in pairs(dic) do
    --print(k, v[1], v[2], v[3])
    --translatedDate = string.gsub(translatedDate, k, v[1])
  --end
  translatedDate = string.gsub(translatedDate, 'January', 'Января')
  return translatedDate
end