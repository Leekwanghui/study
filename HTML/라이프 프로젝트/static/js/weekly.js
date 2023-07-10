let date = new Date();

const week = () => {
  const viewYear = date.getFullYear();
  const viewMonth = date.getMonth();
  const viewDay = date.getDay();

  document.querySelector('.year-month').textContent = `${viewYear}년 ${viewMonth + 1}월 ${viewDay}일`;

  const prevLast = new Date(viewYear, viewMonth, 0);
  const thisLast = new Date(viewYear, viewMonth, 0);

};

week();

const prevMonth = () => {
  date.setMonth(date.getMonth() - 1);
  week();
};

const nextMonth = () => {
  date.setMonth(date.getMonth() + 1);
  week();
};

const goToday = () => {
  date = new Date();
  week();
};

