// RightPanel - subscribes to selection changes and updates right panel

import { subscribe } from '../js/StateManager.js';
import { SelectionManager } from '../js/selection.js';

subscribe('selectedItem', (item) => {
  SelectionManager.updateRightPanel(item || null);
});

