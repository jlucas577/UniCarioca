# Install Yahoo Finance
# !pip install yfinance --upgrade --no-cache-dir

import yfinance as yf
import seaborn as sns

sns.set_theme(style="darkgrid")

# Petrobrás
action1 = yf.download(
  str('PETR3.SA'), 
  start='2022-05-04', 
  end='2022-11-04',
  group_by="ticker"
);
sns.distplot(action1['Close'].dropna())

# Ambev
action2 = yf.download(
  str('ABEV3.SA'), 
  start='2022-05-04', 
  end='2022-11-04',
  group_by="ticker"
);
sns.distplot(action2['Close'].dropna())

# Banco PAN
action3 = yf.download(
  str('BPAN4.SA'), 
  start='2022-05-04', 
  end='2022-11-04',
  group_by="ticker"
);
sns.distplot(action3['Close'].dropna())

# Meliuz
action4 = yf.download(
  str('CASH3.SA'), 
  start='2022-05-04', 
  end='2022-11-04',
  group_by="ticker"
);
sns.distplot(action4['Close'].dropna())

# Magazine Luiza
action5 = yf.download(
  str('MGLU3.SA'), 
  start='2022-05-04', 
  end='2022-11-04',
  group_by="ticker"
);
sns.distplot(action5['Close'].dropna())

# Modal Mais
action6 = yf.download(
  str('MODL3.SA'), 
  start='2022-05-04', 
  end='2022-11-04',
  group_by="ticker"
);
sns.distplot(action6['Close'].dropna())

# Via
action7 = yf.download(
  str('VIIA3.SA'), 
  start='2022-05-04', 
  end='2022-11-04',
  group_by="ticker"
);
sns.distplot(action7['Close'].dropna())

# Viver
action8 = yf.download(
  str('VIVR3.SA'), 
  start='2022-05-04', 
  end='2022-11-04',
  group_by="ticker"
);
sns.distplot(action8['Close'].dropna())
