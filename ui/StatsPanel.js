// StatsPanel - subscribes to selection changes and updates stats UI

import { subscribe } from '../js/StateManager.js';
import { SelectionManager } from '../js/selection.js';

function clearStatsUI() {
  const ids = ['statName','statClassName','statMod','statDamage','statRange','statMass','statCapacity','statCaliber','statArmor','statRateOfFire','statZoom','statRecoil'];
  ids.forEach(id => {
    const el = document.getElementById(id);
    if (el) {
      el.textContent = '-';
      if (el.parentElement) el.parentElement.style.display = 'none';
    }
  });
}

// Subscribe immediately on module import
subscribe('selectedItem', (item) => {
  if (item) {
    SelectionManager.updateStats(item);
  } else {
    clearStatsUI();
  }
});

