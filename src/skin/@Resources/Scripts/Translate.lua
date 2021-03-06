function Initialize()
  dictionary = {
    ru = {
      months = {
        ['January'] = 'Январь',
        ['February'] = 'Февраль',
        ['March'] = 'Март',
        ['April'] = 'Апрель',
        ['May'] = 'Май',
        ['June'] = 'Июнь',
        ['July'] = 'Июль',
        ['August'] = 'Август',
        ['September'] = 'Сентябрь',
        ['October'] = 'Октябрь',
        ['November'] = 'Ноябрь',
        ['December'] = 'Декабрь'
      },
      monthsInDate = {
        ['January'] = 'Января',
        ['February'] = 'Февраля',
        ['March'] = 'Марта',
        ['April'] = 'Апреля',
        ['May'] = 'Мая',
        ['June'] = 'Июня',
        ['July'] = 'Июля',
        ['August'] = 'Августа',
        ['September'] = 'Сентября',
        ['October'] = 'Октября',
        ['November'] = 'Ноября',
        ['December'] = 'Декабря'
      },
      days = {
        ['Monday'] = 'Понедельник',
        ['Tuesday'] = 'Вторник',
        ['Wednesday'] = 'Среда',
        ['Thursday'] = 'Четверг',
        ['Friday'] = 'Пятница',
        ['Saturday'] = 'Суббота',
        ['Sunday'] = 'Воскресенье'
      },
      daysShort = {
        ['Mon'] = 'ПН',
        ['Tue'] = 'ВТ',
        ['Wed'] = 'СР',
        ['Thu'] = 'ЧТ',
        ['Fri'] = 'ПТ',
        ['Sat'] = 'СБ',
        ['Sun'] = 'ВС'
      },
      misc = {
        ['Now'] =  'Сейчас',
        ['Today'] = 'Сегодня',
        ['Tonight'] = 'Ночью',
        ['Tomorrow'] = 'Завтра',
        ['like'] = 'как',
        ['Cores'] = 'Ядер',
        ['Uptime'] = 'Время работы',
        ['MB'] = 'Мб'
      }
    },
    de = {
      months = {
        ['January'] = 'Januar',
        ['February'] = 'Februar',
        ['March'] = 'Marz',
        ['April'] = 'April',
        ['May'] = 'Mai',
        ['June'] = 'Juni',
        ['July'] = 'Juli',
        ['August'] = 'August',
        ['September'] = 'September',
        ['October'] = 'Oktober',
        ['November'] = 'November',
        ['December'] = 'Dezember'
      },
      monthsInDate = {
        ['January'] = '. Januar',
        ['February'] = '. Februar',
        ['March'] = '. Marz',
        ['April'] = '. April',
        ['May'] = '. Mai',
        ['June'] = '. Juni',
        ['July'] = '. Juli',
        ['August'] = '. August',
        ['September'] = '. September',
        ['October'] = '. Oktober',
        ['November'] = '. November',
        ['December'] = '. Dezember'
      },
      days = {
        ['Monday'] = 'Montag',
        ['Tuesday'] = 'Dienstag',
        ['Wednesday'] = 'Mittwoch',
        ['Thursday'] = 'Donnerstag',
        ['Friday'] = 'Freitag',
        ['Saturday'] = 'Samstag',
        ['Sunday'] = 'Sonntag'
      },
      daysShort = {
        ['Mon'] = 'MO',
        ['Tue'] = 'DI',
        ['Wed'] = 'MI',
        ['Thu'] = 'DO',
        ['Fri'] = 'FR',
        ['Sat'] = 'SA',
        ['Sun'] = 'SO'
      },
      misc = {
        ['Now'] =  'Aktuelles',
        ['Today'] = 'Heute',
        ['Tonight'] = 'Nacht',
        ['Tomorrow'] = 'Morgen',
        ['like'] = 'wie',
        ['Cores'] = 'Kerne',
        ['Uptime'] = 'Betriebszeit',
        ['MB'] = 'MB'
      }
    }
  }
end

function Translate(date, lang)
  if dictionary[lang] == nil then return date end

  for k, v in pairs(dictionary[lang]['months']) do
    if date == k then return v end
  end

  for k, v in pairs(dictionary[lang]['daysShort']) do
    if date == k then return v end
  end

  for k, v in pairs(dictionary[lang]['monthsInDate']) do
    date = string.gsub(date, k, v)
  end

  for k, v in pairs(dictionary[lang]['days']) do
    date = string.gsub(date, k, v)
  end

  for k, v in pairs(dictionary[lang]['misc']) do
    date = string.gsub(date, k, v)
  end

  return date
end